//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCarbonMenuImpl.h>

__attribute__((visibility("hidden")))
@interface NSProCarbonMenuImpl : NSCarbonMenuImpl
{
    BOOL _useProMenuDef;
    BOOL _lieAboutClass;
}

+ (void)_enableProMenus;
- (void)_itemRemoved:(long long)arg1;
- (void)_itemChanged:(long long)arg1;
- (void)_itemAdded:(long long)arg1;
- (Class)class;
- (void)_installProMenuDefHandler;
- (void)setAsMainCarbonMenuBar;
- (void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 withFont:(id)arg4;
- (void)popUpMenu:(id)arg1 atLocation:(struct CGPoint)arg2 width:(double)arg3 forView:(id)arg4 withSelectedItem:(long long)arg5 withFont:(id)arg6 withFlags:(unsigned long long)arg7 withOptions:(id)arg8;
- (void)popUpMenu:(id)arg1 atLocation:(struct CGPoint)arg2 width:(double)arg3 forView:(id)arg4 withSelectedItem:(long long)arg5 withFont:(id)arg6;
- (struct OpaqueMenuRef *)_createMenuRef;
- (id)init;

@end

