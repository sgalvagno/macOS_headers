//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCTMenuBarVisibilityManager : NSObject
{
    id delegate;
}

@property(retain, nonatomic) id delegate; // @synthesize delegate;
- (void)makeMenuBarVisible;
- (void)_showMenu;
- (void)_showMenuFail;
- (void)_showMenuNow;
- (BOOL)_load_HIMenuBarRequestVisibility;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

