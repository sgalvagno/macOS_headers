//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Install/IFRequirement.h>

@class IFPkg;

@interface IFVolumeCheckRequirement : IFRequirement
{
    IFPkg *_delegatePackage;
}

- (BOOL)doesEvaluateSecurely;
- (id)label;
- (BOOL)isTrueForTarget:(id)arg1;
- (id)initWithPackage:(id)arg1;

@end

