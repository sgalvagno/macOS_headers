//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFFavoriteLocationProvider-Protocol.h>

@class NSString;
@protocol WFFavoriteLocationProviderDelegate;

@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider>
{
    id <WFFavoriteLocationProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <WFFavoriteLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeLocation:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)setLocations:(id)arg1;
- (id)locations;
- (BOOL)canProvideDefaultFavorites;
- (id)init;
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

