//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/_MKUIViewController.h>

#import <MapKit/MKPlaceSectionViewDelegate-Protocol.h>

@class MKPlaceSectionView, NSString;

@interface MKPlaceSectionViewController : _MKUIViewController <MKPlaceSectionViewDelegate>
{
    MKPlaceSectionView *_sectionView;
}

- (void).cxx_destruct;
- (void)sectionView:(id)arg1 didSelectFooter:(id)arg2;
- (void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(id)arg1 didSelectHeader:(id)arg2;
@property(readonly, nonatomic) MKPlaceSectionView *sectionView; // @synthesize sectionView=_sectionView;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

