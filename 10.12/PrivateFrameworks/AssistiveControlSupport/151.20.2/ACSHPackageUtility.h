//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACSHPackageUtility : NSObject
{
}

+ (void)convertPanelInfo:(id)arg1 fromVersion:(unsigned long long)arg2 toVersion:(unsigned long long)arg3;
+ (void)convertPanelsInfo:(id)arg1 fromVersion:(unsigned long long)arg2 toVersion:(unsigned long long)arg3;
+ (id)fileWrapperForPackageWithPanelCollection:(id)arg1 resourceCollection:(id)arg2 packageInfo:(id)arg3 error:(id *)arg4;
+ (BOOL)loadPackageWithFilewrapper:(id)arg1 panelCollection:(id *)arg2 resourceCollection:(id *)arg3 packageInfo:(id *)arg4 error:(id *)arg5 undoManager:(id)arg6;

@end

