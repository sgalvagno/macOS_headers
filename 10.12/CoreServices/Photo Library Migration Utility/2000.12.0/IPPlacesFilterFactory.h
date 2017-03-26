//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class MultiPaneController;

@interface IPPlacesFilterFactory : NSObject
{
    MultiPaneController *_multiPaneController;
}

+ (id)detailTitleForPhotos:(struct IPPhotoList *)arg1;
- (id)_detailTitleForAnnotations:(id)arg1;
- (id)_ridListForAnnotations:(id)arg1;
- (void)_addFilterAlbumForFilters:(id)arg1 withFallbackName:(id)arg2;
- (void)addFilterAlbumForMapCorners:(struct CGRect)arg1;
- (void)addFilterAlbumForAnnotation:(id)arg1;
- (id)filterAlbumForMapAnnotations:(id)arg1;
- (id)initWithMultiPaneController:(id)arg1;

@end

