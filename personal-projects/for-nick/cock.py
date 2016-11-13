__author__ = 'adamg'
import time
import pprint
from bs4 import BeautifulSoup
import urllib2
import json

def get_blog_urls(url):
    try:
        req = urllib2.Request(url, headers={'User-Agent': 'Mozilla/5.0'})
        page = urllib2.urlopen(req)
        soup = BeautifulSoup(page, 'html.parser')
        blogs_urls = soup.find_all('a')

        x = []
        for y in blogs_urls:
            a = str(y)
            if '/blog/' in a:
                x.append(a)

        final = []
        for elem in x:
            newstr = ""
            begin_index = elem.find('/blog')
            end_index = elem.find('onclick') - 2
            newstr = elem[begin_index:end_index]
            final.append(newstr)

        return final
    except urllib2.HTTPError:
        print 'rejected'

def get_blogs(url):
    try:
        req = urllib2.Request(url, headers={'User-Agent': 'Mozilla/5.0'})
        page = urllib2.urlopen(req)
        soup = BeautifulSoup(page, 'html.parser')

        blogs = soup.find_all("img")

        def prune(arr):
            temp = []
            to_return = []
            for elem in arr:
                new = str(elem)
                if "alt" not in new:
                    temp.append(new)
            for elem in temp:
                begin_index = elem.find('title') + 7
                end_index = elem.find('width') - 2
                to_return.append(elem[begin_index:end_index])
            return to_return

        return prune(blogs)
    except urllib2.HTTPError:
        print 'rejected'


def format_name(blog):
    lowercase = blog.lower()
    to_return = ''
    for char in lowercase:
        if char != ' ':
            to_return += char
        else:
            to_return += '+'
    return to_return

def create_map(blogs, urls):
    try:
        to_return = {}
        for blog in blogs:
            url = find_blogs_url(blog, urls)
            to_return[blog] = url
        return to_return
    except urllib2.HTTPError:
        print 'rejected'

def find_blogs_url(blog, urls):
    for url in urls:
        if format_name(blog) in url:
            return url

#print(create_map(get_blogs(), get_blog_urls()))

cock = 'http://hypem.com/blog/high+clouds/23232'

def get_genres(url):
    try:
        req = urllib2.Request(url, headers={'User-Agent': 'Mozilla/5.0'})
        page = urllib2.urlopen(req)
        soup = BeautifulSoup(page, 'html.parser')

        to_return = []
        for thing in soup.find_all('a'):
            if '/blogs/tags/' in str(thing.get('href')):
                genre_link = thing.get('href')
                to_return.append(genre_link.split('/')[3])

        return to_return
    except urllib2.HTTPError:
        print 'rejected'


def get_number_of_tracks(url):
    try:
        req = urllib2.Request(url, headers={'User-Agent': 'Mozilla/5.0'})
        page = urllib2.urlopen(req)
        soup = BeautifulSoup(page, 'html.parser')
        for thing in soup.find_all('a'):
            try:
                if 'Tracks' in str(thing.get('title')):
                    span = str(thing.find('span'))
                    begin_index = span.find('>') + 1
                    end_index = span.find('</')
                    return span[begin_index: end_index]
            except UnicodeEncodeError:
                comment = 'ignored'
    except urllib2.HTTPError:
        print 'rejected'

def get_number_of_followers(url):
    try:
        req = urllib2.Request(url, headers={'User-Agent': 'Mozilla/5.0'})
        page = urllib2.urlopen(req)
        soup = BeautifulSoup(page, 'html.parser')
        for thing in soup.find_all('a'):
            try:
                if 'follow' in str(thing.get('title')):
                    span = str(thing.find('span'))
                    begin_index = span.find('>') + 1
                    end_index = span.find('</')
                    return span[begin_index: end_index]
            except UnicodeEncodeError:
                comment = 'ignored'
    except urllib2.HTTPError:
        print 'rejected'


def get_genre_urls():
    try:
        urls = ['http://hypem.com/blogs/new', 'http://hypem.com/blogs/featured']
        req = urllib2.Request('http://hypem.com/blogs/', headers={'User-Agent': 'Mozilla/5.0'})
        page = urllib2.urlopen(req)
        soup = BeautifulSoup(page, 'html.parser')
        blogs_urls = soup.find_all('li')

        for blog_url in blogs_urls:
            tmp = blog_url.find('a')
            if 'blogs/tags' in str(tmp.get('href')) or 'blogs/special' in str(tmp.get('href')):
                url = str(tmp.get('href')).strip()
                urls.append('http://hypem.com' + url)
        return urls
    except urllib2.HTTPError:
        print 'rejected'




def run_main():
    completed_file = open('completed.json')
    completed = json.load(completed_file)
    final_info_file = open('final_info.json', 'a+')
    final_info = {}
    try:
        genre_urls = get_genre_urls()
        print('a')
        time.sleep(5)
        for genre_url in genre_urls:
            if genre_url not in completed:
                print('b')
                time.sleep(3)
                blogs = create_map(get_blogs(genre_url), get_blog_urls(genre_url))
                try:
                    for blog in blogs:
                        print('c')
                        try:
                            time.sleep(2)
                            if blog not in completed:
                                print('d')

                                final_info[blog] = {}
                                final_info[blog]['url'] = 'http://hypem.com' + blogs[blog]
                                url = 'http://hypem.com' + blogs[blog]
                                final_info[blog]['followers'] = get_number_of_followers(url)
                                time.sleep(2)
                                print('e')
                                final_info[blog]['tracks'] = get_number_of_tracks(url)
                                time.sleep(2)
                                print('f')
                                final_info[blog]['genres'] = get_genres(url)
                                time.sleep(2)
                                print('g')
                                completed.append(blog)
                                pprint.pprint(final_info)
                        except TypeError:
                            final_info_file.write(json.dump(final_info[blog]))
                            final_info_file.close()
                            completed_file.write(json.dump(completed))
                            completed_file.close()
                            return
                    completed.append(genre_url)
                except TypeError:
                    final_info_file.close()
                    completed_file.close()
                    return

        print final_info
    except urllib2.HTTPError:
        print 'rejected'

run_main()
