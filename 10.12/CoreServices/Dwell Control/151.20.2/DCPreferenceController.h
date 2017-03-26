//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DCPreferenceController : NSObject
{
    BOOL _dwellZoomEnabled;
    long long __lastNonSingleDwellAction;
}

@property(nonatomic) long long _lastNonSingleDwellAction; // @synthesize _lastNonSingleDwellAction=__lastNonSingleDwellAction;
@property(nonatomic) BOOL dwellZoomEnabled; // @synthesize dwellZoomEnabled=_dwellZoomEnabled;
- (unsigned long long)_actionForActionType:(long long)arg1;
- (unsigned long long)topRightCornerActionType;
- (unsigned long long)topLeftCornerActionType;
- (unsigned long long)bottomRightCornerActionType;
- (unsigned long long)bottomLeftCornerActionType;
- (void)clearSingleActionMode;
@property(readonly, nonatomic) double toleranceDistance;
@property(readonly, nonatomic) BOOL defaultToLeftClick;
@property(readonly, nonatomic) long long menuItemDisplayStyle;
@property(readonly, nonatomic) double assistiveControlUIDwellTime;
@property(readonly, nonatomic) double zoomDwellTime;
@property(readonly, nonatomic) double menuDwellTime;
@property(readonly, nonatomic) double hotCornerDwellTime;
@property(readonly, nonatomic) double defaultDwellTime;
@property(nonatomic) long long dwellAction;
@property(readonly, nonatomic) double scrollSpeed;
- (void)settingsChanged:(id)arg1;
- (id)init;

@end

