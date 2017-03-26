//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSMutableArray, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem
{
    NSMutableArray *_orderedResponses;
    CoreDAVLeafItem *_responseDescription;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVLeafItem *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) NSMutableArray *orderedResponses; // @synthesize orderedResponses=_orderedResponses;
@property(readonly, nonatomic) NSSet *responses;
- (void)addResponse:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

