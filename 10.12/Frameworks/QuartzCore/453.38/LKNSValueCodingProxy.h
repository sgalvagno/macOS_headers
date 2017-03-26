//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CACodingProxy.h>

__attribute__((visibility("hidden")))
@interface LKNSValueCodingProxy : CACodingProxy
{
    int _kind;
    union {
        struct CGPoint point;
        struct CGSize size;
        struct CGRect rect;
        struct CATransform3D transform;
        struct CAPoint3D point3d;
        struct CAColorMatrix color_matrix;
    } _u;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)decodedObject;
- (id)initWithObject:(id)arg1;

@end

