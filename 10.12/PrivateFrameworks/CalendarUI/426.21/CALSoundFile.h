//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CALSoundFile : NSObject
{
    int _type;
    NSString *_name;
    NSString *_extension;
}

- (void).cxx_destruct;
- (long long)compareTypeThenName:(id)arg1;
- (long long)compareNameThenType:(id)arg1;
- (long long)compareType:(id)arg1;
- (long long)compareName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (id)pathWithoutExtension;
- (id)path;
- (id)displayName;
- (id)name;
- (int)type;
- (id)initWithName:(id)arg1 type:(int)arg2 extension:(id)arg3;

@end

