{
	"patcher" : 	{
		"fileversion" : 1,
		"rect" : [ 95.0, 75.0, 640.0, 480.0 ],
		"bglocked" : 0,
		"defrect" : [ 95.0, 75.0, 640.0, 480.0 ],
		"openrect" : [ 0.0, 0.0, 0.0, 0.0 ],
		"openinpresentation" : 0,
		"default_fontsize" : 12.0,
		"default_fontface" : 0,
		"default_fontname" : "Arial",
		"gridonopen" : 0,
		"gridsize" : [ 15.0, 15.0 ],
		"gridsnaponopen" : 0,
		"toolbarvisible" : 1,
		"boxanimatetime" : 200,
		"imprint" : 0,
		"enablehscroll" : 1,
		"enablevscroll" : 1,
		"devicewidth" : 0.0,
		"boxes" : [ 			{
				"box" : 				{
					"maxclass" : "comment",
					"text" : "0 seconds from now, create table 1 and fill it with a sine wave (offset 90 degrees).",
					"linecount" : 2,
					"patching_rect" : [ 339.0, 175.0, 281.0, 34.0 ],
					"numinlets" : 1,
					"numoutlets" : 0,
					"fontname" : "Arial",
					"id" : "obj-9",
					"presentation_rect" : [ 345.0, 173.0, 0.0, 0.0 ],
					"fontsize" : 12.0
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "comment",
					"text" : "0 seconds from now, play instr 7 for 30 seconds.",
					"patching_rect" : [ 181.0, 148.0, 281.0, 20.0 ],
					"numinlets" : 1,
					"numoutlets" : 0,
					"fontname" : "Arial",
					"id" : "obj-8",
					"fontsize" : 12.0
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "message",
					"text" : "e f 1 0 16384 9 1 1 90",
					"patching_rect" : [ 210.0, 180.0, 128.0, 18.0 ],
					"numinlets" : 2,
					"bgcolor" : [ 0.941176, 0.941176, 0.941176, 1.0 ],
					"numoutlets" : 1,
					"fontname" : "Arial",
					"outlettype" : [ "" ],
					"id" : "obj-6",
					"presentation_rect" : [ 264.0, 203.0, 0.0, 0.0 ],
					"fontsize" : 12.0
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "message",
					"text" : "e i 7 0 30",
					"patching_rect" : [ 120.0, 150.0, 60.0, 18.0 ],
					"numinlets" : 2,
					"bgcolor" : [ 0.941176, 0.941176, 0.941176, 1.0 ],
					"numoutlets" : 1,
					"fontname" : "Arial",
					"outlettype" : [ "" ],
					"id" : "obj-5",
					"fontsize" : 12.0
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "newobj",
					"text" : "csound~",
					"patching_rect" : [ 120.0, 210.0, 86.5, 20.0 ],
					"numinlets" : 2,
					"numoutlets" : 6,
					"fontname" : "Arial",
					"outlettype" : [ "signal", "signal", "list", "int", "bang", "bang" ],
					"id" : "obj-3",
					"fontsize" : 12.0,
					"saved_object_attributes" : 					{
						"args" : "",
						"message" : 1,
						"matchsr" : 1,
						"output" : 1,
						"bypass" : 0,
						"input" : 1,
						"interval" : 10,
						"overdrive" : 0,
						"autostart" : 0
					}

				}

			}
 ],
		"lines" : [ 			{
				"patchline" : 				{
					"source" : [ "obj-5", 0 ],
					"destination" : [ "obj-3", 0 ],
					"hidden" : 0,
					"midpoints" : [  ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-6", 0 ],
					"destination" : [ "obj-3", 0 ],
					"hidden" : 0,
					"midpoints" : [  ]
				}

			}
 ]
	}

}
