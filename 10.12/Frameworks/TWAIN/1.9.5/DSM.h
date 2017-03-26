//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBox, NSButton, NSMutableArray, NSMutableDictionary, NSPanel, NSTableView, NSTextView;

__attribute__((visibility("hidden")))
@interface DSM : NSObject
{
    NSPanel *_panel;
    NSTableView *_tableView;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSTextView *_moreInfo;
    NSBox *_box;
    NSMutableDictionary *_dataSources;
    int _dataSourceIndex;
    NSMutableArray *_icaInfo;
    struct TW_IDENTITY *_source;
    struct TW_IDENTITY *_destination;
    unsigned int _dataGroup;
    unsigned short _dataArgumentType;
    unsigned short _messageID;
    char *_dataPtr;
    struct CallBackInfo _callbackInfo;
    short _conditionCode;
    int _dsmState;
    BOOL _insideFlag;
}

- (void)cancel:(id)arg1;
- (void)select:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(unsigned long long)arg3;
- (unsigned long long)numberOfRowsInTableView:(id)arg1;
- (short)getDefault;
- (short)selectDS;
- (unsigned short)getNext;
- (unsigned short)getFirst;
- (short)closeDS;
- (short)openDS;
- (unsigned short)getNextSupported;
- (unsigned short)closeDSM;
- (unsigned short)openDSM;
- (short)getMatchingDefault:(struct TW_IDENTITY *)arg1;
- (void)switchToTWAIN:(id)arg1;
- (void)saveICAInfo;
- (void)loadICAInfo;
- (void)buildDataSourceArray;
- (unsigned short)processMessage;
- (unsigned short)entryDS;
- (BOOL)validateDS:(id)arg1;
- (unsigned short)callback;
- (void)doCallback:(id)arg1;
- (unsigned short)identity;
- (unsigned short)parent;
- (unsigned short)status;
- (unsigned short)entry:(struct TW_IDENTITY *)arg1 destination:(struct TW_IDENTITY *)arg2 dataGroup:(unsigned int)arg3 dataArgumentType:(unsigned short)arg4 messageID:(unsigned short)arg5 dataPtr:(char *)arg6;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

