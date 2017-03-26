//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarStore/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface CalAttendee : NSObject <NSCopying>
{
    id _objectID;
    void *_reserved;
    NSURL *_address;
    NSString *_commonName;
    NSString *_status;
}

+ (id)attendeeWithAddress:(id)arg1 commonName:(id)arg2;
@property(readonly) NSString *status; // @synthesize status=_status;
@property(readonly) NSString *commonName; // @synthesize commonName=_commonName;
@property(readonly) NSURL *address; // @synthesize address=_address;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)setStatus:(id)arg1;
- (id)initWithAddress:(id)arg1 commonName:(id)arg2;

@end

