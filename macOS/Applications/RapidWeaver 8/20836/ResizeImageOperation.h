//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AsynchronousOperation.h"

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface ResizeImageOperation : AsynchronousOperation
{
    NSString *_type;
    NSImage *_sourceImage;
    NSImage *_outputImage;
    struct CGSize _desiredSize;
}

+ (id)resizeImage:(id)arg1 toSize:(struct CGSize)arg2;
@property(retain, nonatomic) NSImage *outputImage; // @synthesize outputImage=_outputImage;
@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=_desiredSize;
@property(retain, nonatomic) NSImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)start;

@end

