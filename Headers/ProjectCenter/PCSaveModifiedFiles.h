/*
   GNUstep ProjectCenter - http://www.gnustep.org/experience/ProjectCenter.html

   Copyright (C) 2000-2004 Free Software Foundation

   Authors: Philippe C.D. Robert
            Serg Stoyan

   This file is part of GNUstep.

   This application is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This application is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
*/

#ifndef _PCSaveModifiedFiles_h_
#define _PCSaveModifiedFiles_h_

#import <AppKit/AppKit.h>

@interface PCSaveModifiedFiles : NSObject
{
  PCEditorManager *editorManager;

  NSWindow        *panel;
  NSTableView     *filesList;
  NSButton        *defaultButton;
  NSButton        *alternateButton;
  NSButton        *otherButton;

  NSButton        *clickedButton;

}

- (BOOL)openWithEditorManager:(PCEditorManager *)manager
	    defaultButtonText:(NSString *)defaultText
	  alternateButtonText:(NSString *)alternateText
	      otherButtonText:(NSString *)otherText;
- (void)dealloc;

- (int)numberOfRowsInTableView:(NSTableView *)aTableView;

- (id)            tableView:(NSTableView *)aTableView
  objectValueForTableColumn:(NSTableColumn *)aTableColumn
                        row:(int)rowIndex;
@end

#endif 
