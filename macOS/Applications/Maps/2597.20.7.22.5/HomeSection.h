//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsUIDiffableDataSourceIdentifiable-Protocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HomeSection : NSObject <MapsUIDiffableDataSourceIdentifiable>
{
    BOOL _showsSectionButton;
    long long _type;
    NSArray *_contents;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showsSectionButton; // @synthesize showsSectionButton=_showsSectionButton;
@property(readonly, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *localizedButtonName;
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;
- (id)initWithType:(long long)arg1 contents:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

