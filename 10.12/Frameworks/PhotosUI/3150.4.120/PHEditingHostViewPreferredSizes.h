//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@interface PHEditingHostViewPreferredSizes : NSObject <NSSecureCoding>
{
    struct CGSize _preferredMinimumSize;
    struct CGSize _preferredMaximumSize;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) struct CGSize preferredMaximumSize; // @synthesize preferredMaximumSize=_preferredMaximumSize;
@property(readonly, nonatomic) struct CGSize preferredMinimumSize; // @synthesize preferredMinimumSize=_preferredMinimumSize;
- (BOOL)isEqualToCurrentSizesInViewController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSizesFromViewController:(id)arg1;

@end

