//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SALocalSearchMapViewport : SADomainObject
{
}

+ (id)mapViewportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapViewport;
@property(nonatomic) double westLongitude;
@property(copy, nonatomic) NSArray *vertices;
@property(nonatomic) double timeInSecondsSinceViewportEnteredForeground;
@property(nonatomic) double timeInSecondsSinceViewportChanged;
@property(nonatomic) double southLatitude;
@property(nonatomic) double northLatitude;
@property(nonatomic) double eastLongitude;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

