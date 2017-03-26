//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICNFIMAPClientFetchDataItem, ICNFIMAPFetchResult;

@interface _ICNFIMAPFetchUnit : NSObject
{
    unsigned int _uid;
    unsigned int _expectedLength;
    ICNFIMAPClientFetchDataItem *_fetchItem;
    ICNFIMAPFetchResult *_expectedFetchResult;
}

@property(nonatomic) unsigned int expectedLength; // @synthesize expectedLength=_expectedLength;
@property(retain, nonatomic) ICNFIMAPFetchResult *expectedFetchResult; // @synthesize expectedFetchResult=_expectedFetchResult;
@property(retain, nonatomic) ICNFIMAPClientFetchDataItem *fetchItem; // @synthesize fetchItem=_fetchItem;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)newFailedFetchResponse;
- (BOOL)matchesFetchResponse:(id)arg1;
- (void)_setupExpectedFetchResult;
- (id)description;

@end

