//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NPKeyBag : NSObject
{
    unsigned int _index;
    unsigned int _timestamp;
    unsigned int _error;
    unsigned int _generation;
    NSArray *_keys;
    double _lastUsedTimestamp;
    long long _TFOStatus;
}

@property long long TFOStatus; // @synthesize TFOStatus=_TFOStatus;
@property double lastUsedTimestamp; // @synthesize lastUsedTimestamp=_lastUsedTimestamp;
@property unsigned int generation; // @synthesize generation=_generation;
@property unsigned int error; // @synthesize error=_error;
@property unsigned int timestamp; // @synthesize timestamp=_timestamp;
@property unsigned int index; // @synthesize index=_index;
@property(retain) NSArray *keys; // @synthesize keys=_keys;
- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1;

@end

