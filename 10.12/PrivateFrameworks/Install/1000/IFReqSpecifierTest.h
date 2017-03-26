//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSScriptWhoseTest.h>

@class IFReqObjectSpecifier;

@interface IFReqSpecifierTest : NSScriptWhoseTest
{
    IFReqObjectSpecifier *_obj1Spec;
    SEL _testMethod;
    id _obj2;
}

+ (id)testWithObjectSpecifier:(id)arg1 opString:(id)arg2 object:(id)arg3;
+ (SEL)testMethodForString:(id)arg1;
+ (id)stringForComparisonMethod:(SEL)arg1;
- (id)description;
- (id)testObject;
- (SEL)testMethod;
- (id)objectSpecifier;
- (BOOL)isTrueForTarget:(id)arg1;
- (void)dealloc;
- (id)initWithObjectSpecifier:(id)arg1 testMethod:(SEL)arg2 testObject:(id)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1 withPkgIdentifier:(id)arg2;

@end

