//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StoreFoundation/ISOperation.h>

@class CKBook, NSImage;

@interface CKBookFetchCoverImageOperation : ISOperation
{
    CKBook *_book;
    NSImage *_coverImage;
}

@property(readonly) NSImage *coverImage; // @synthesize coverImage=_coverImage;
@property(readonly) CKBook *book; // @synthesize book=_book;
- (void).cxx_destruct;
- (id)_downloadCoverImageFromURL:(id)arg1 returningError:(id *)arg2;
- (void)run;
- (id)initWithBook:(id)arg1 storeClient:(id)arg2;

@end

