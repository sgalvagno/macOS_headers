//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface ICCommand : NSObject
{
    NSNumber *_transactionID;
    NSString *_type;
    NSMutableDictionary *_dict;
    id _delegate;
    double _timeSent;
    double _timeCompleted;
}

@property double timeCompleted; // @synthesize timeCompleted=_timeCompleted;
@property double timeSent; // @synthesize timeSent=_timeSent;
@property(retain) id delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property(copy) NSString *type; // @synthesize type=_type;
@property(retain) NSNumber *transactionID; // @synthesize transactionID=_transactionID;
- (void)finalize;
- (void)dealloc;

@end

