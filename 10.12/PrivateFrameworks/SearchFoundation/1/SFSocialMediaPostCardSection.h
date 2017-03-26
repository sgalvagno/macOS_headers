//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

@class NSNumber, NSString, SFImage, SFRichText;

@interface SFSocialMediaPostCardSection : SFCardSection
{
    BOOL _nameNoWrap;
    NSString *_name;
    NSNumber *_nameMaxLines;
    NSString *_handle;
    SFImage *_verifiedGlyph;
    SFImage *_profilePicture;
    SFRichText *_post;
    SFImage *_picture;
    NSString *_timestamp;
    NSString *_footnote;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) SFImage *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) SFRichText *post; // @synthesize post=_post;
@property(retain, nonatomic) SFImage *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(retain, nonatomic) SFImage *verifiedGlyph; // @synthesize verifiedGlyph=_verifiedGlyph;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSNumber *nameMaxLines; // @synthesize nameMaxLines=_nameMaxLines;
@property(nonatomic) BOOL nameNoWrap; // @synthesize nameNoWrap=_nameNoWrap;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

