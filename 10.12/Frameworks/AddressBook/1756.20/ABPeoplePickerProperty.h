//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface ABPeoplePickerProperty : NSObject
{
    NSString *title;
    NSString *property;
    NSString *key;
    NSPredicate *filter;
}

@property(retain, nonatomic) NSPredicate *filter; // @synthesize filter;
@property(retain, nonatomic) NSString *key; // @synthesize key;
@property(retain, nonatomic) NSString *property; // @synthesize property;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (id)description;
- (void)dealloc;

@end

