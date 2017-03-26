//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

@class NSColor, NSImage;

@interface WBSTouchIconResponse : WBSSiteMetadataResponse
{
    BOOL _generated;
    NSImage *_touchIcon;
    NSColor *_extractedBackgroundColor;
}

+ (id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4;
@property(readonly, nonatomic, getter=isGenerated) BOOL generated; // @synthesize generated=_generated;
@property(readonly, nonatomic) NSColor *extractedBackgroundColor; // @synthesize extractedBackgroundColor=_extractedBackgroundColor;
@property(readonly, nonatomic) NSImage *touchIcon; // @synthesize touchIcon=_touchIcon;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4;
- (id)initWithURL:(id)arg1;

@end

