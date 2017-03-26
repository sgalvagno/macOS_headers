//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTouchBarConfiguration.h>

@class NSArray, NSString;

@interface NSTouchBarCustomizableConfiguration : NSTouchBarConfiguration
{
    NSString *_identifier;
    NSArray *_defaultItemIdentifiers;
    NSArray *_allowedItemIdentifiers;
    NSArray *_requiredItemIdentifiers;
    NSArray *_customizedItemIdentifiers;
}

+ (id)keyPathsForValuesAffectingPresentedItemIdentifiers;
- (id)debugDescription;
- (id)description;
- (void)_resetCustomization;
- (void)_persistCustomizedItemIdentifiers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterForCustomizationChangesWithIdentifier:(id)arg1;
- (void)_registerForCustomizationChangesWithIdentifier:(id)arg1;
- (id)presentedItemIdentifiers;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
@property(copy, getter=_customizedItemIdentifiers, setter=_setCustomizedItemIdentifiers:) NSArray *_customizedItemIdentifiers;
@property(copy) NSArray *requiredItemIdentifiers;
@property(copy) NSArray *allowedItemIdentifiers;
@property(copy) NSArray *defaultItemIdentifiers;
@property(copy) NSString *identifier;

@end

