//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface AlbumSelectableHolder : NSObject
{
    struct IPAlbumSelectable *mAlbum;
    BOOL mDeleteOnDealloc;
}

+ (id)hold:(struct IPAlbumSelectable *)arg1 deleteOnDealloc:(BOOL)arg2;
+ (id)hold:(struct IPAlbumSelectable *)arg1;
- (struct IPAlbumSelectable *)album;
- (void)dealloc;
- (id)initWithAlbum:(struct IPAlbumSelectable *)arg1 deleteOnDealloc:(BOOL)arg2;

@end

