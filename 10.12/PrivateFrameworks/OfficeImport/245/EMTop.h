//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CMTop.h>

#import <OfficeImport/OIProgressiveReaderDelegate-Protocol.h>

@class CMArchiveManager, EMState, EMWorkbookMapper, NSString;

__attribute__((visibility("hidden")))
@interface EMTop : CMTop <OIProgressiveReaderDelegate>
{
    CMArchiveManager *_archiver;
    EMState *_state;
    EMWorkbookMapper *_mapper;
    NSString *_inFileName;
    BOOL _xml;
}

+ (void)fillHTMLArchiveForExcelData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;
+ (void)fillHTMLArchiveForExcelFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3;
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
- (void)dealloc;
- (void)readFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3;
- (void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4;
- (void)readFile:(id)arg1 orData:(id)arg2 withDataFileName:(id)arg3 xmlFlag:(BOOL)arg4 archiver:(id)arg5;
- (void)_streamWorkbook:(id)arg1;

@end

