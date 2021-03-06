//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmallDocumentDialogController.h"

@class MATextField, MyTableView, NSButton;

@interface TextFaderController : SmallDocumentDialogController
{
    MyTableView *mMyTable1;
    MyTableView *mMyTable2;
    MyTableView *mMyTable3;
    MyTableView *mMyTable4;
    MyTableView *mMyTable5;
    MyTableView *mMyTable6;
    MyTableView *mMyTable7;
    MyTableView *mMyTable8;
    NSButton *mDrumSwitch;
    MATextField *deviceName;
    int mIndex;
    long long mOffsetInMakro;
}

+ (id)show:(id)arg1;
+ (id)show:(id)arg1 withDevice:(struct CInst *)arg2;
+ (id)nibName;
- (void)controlTextDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)getTable:(int)arg1;
- (int)getColumn:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)deselectAllTables;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)deviceNameEntered:(id)arg1;
- (void)drumSwitchClicked:(id)arg1;
- (void)menuPasteAllNames:(id)arg1;
- (void)menuCopyAllNames:(id)arg1;
- (void)setName:(int)arg1 to:(id)arg2;
- (id)name:(int)arg1;
- (void)menuCutAllNames:(id)arg1;
- (void)updateUI;
- (id)windowRightTitle;
- (void)handleUM_GEDIT:(id)arg1;
- (void)handleUM_GDEL:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)willBecomeVisible;
- (struct CInstOutput *)subDevice;
- (struct CInstDevice *)device;
- (struct CInst *)inst;
- (void)close;
- (id)nextTable:(id)arg1 wrap:(char *)arg2;
- (id)prevTable:(id)arg1 wrap:(char *)arg2;
- (void)reloadTableData;
- (void)awakeFromNib;
- (int)lines;
- (int)namesPerBank;
- (int)charsPerName;
- (void)setIndex:(struct CInst *)arg1;
- (unsigned short)parentViewClass;

@end

