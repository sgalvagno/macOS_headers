//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSMutableCopying-Protocol.h>

@class NSString;

@interface MRTextEditingAttributes : NSObject <NSMutableCopying>
{
    NSString *_title;
    NSString *_prompt;
    struct _MRTextInputTraits _inputTraits;
}

@property(readonly, nonatomic) struct _MRTextInputTraits inputTraits; // @synthesize inputTraits=_inputTraits;
@property(readonly, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 prompt:(id)arg2;

@end

