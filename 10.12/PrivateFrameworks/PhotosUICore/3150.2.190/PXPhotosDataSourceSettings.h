//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDataSourceSettings : PXSettings
{
    BOOL _slowBackgroundFetch;
    double _delayChanges;
}

+ (id)sharedInstance;
@property(nonatomic) double delayChanges; // @synthesize delayChanges=_delayChanges;
@property(nonatomic) BOOL slowBackgroundFetch; // @synthesize slowBackgroundFetch=_slowBackgroundFetch;
- (void)setDefaultValues;

@end

