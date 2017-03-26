//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest
{
    NSFetchRequest *_fetchRequest;
    id _requestCompletionBlock;
    long long _estimatedResultCount;
}

@property(nonatomic) long long estimatedResultCount; // @synthesize estimatedResultCount=_estimatedResultCount;
@property(readonly) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_requestCompletionBlock;
@property(readonly) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (void)dealloc;
- (id)description;
- (unsigned long long)requestType;
- (id)initWithFetchRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

