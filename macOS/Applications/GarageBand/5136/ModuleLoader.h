//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ModuleController;

@interface ModuleLoader : NSObject
{
    ModuleController *m_controller;
}

+ (id)newControllerWithIdentifier:(id)arg1;
- (BOOL)loadWithIdentifier:(id)arg1;
- (id)controller;

@end

