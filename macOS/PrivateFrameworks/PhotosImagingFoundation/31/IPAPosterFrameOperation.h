//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPAPosterFrameOperation : IPAVideoOperation
{
    CDStruct_1b6d18a9 _frameTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 frameTime; // @synthesize frameTime=_frameTime;
- (BOOL)isEqualToOperation:(id)arg1;
- (id)debugDescription;
- (id)identifier;
- (id)settingsDictionary;
- (id)initWithSettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)initWithFrameTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)isMigratable;

@end

