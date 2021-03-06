//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface JMURLButton : NSButton
{
    NSString *_targetURL;
    NSString *_escapedTargetURL;
    NSString *_resourceURL;
    NSString *_fileURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSString *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(retain, nonatomic) NSString *escapedTargetURL; // @synthesize escapedTargetURL=_escapedTargetURL;
@property(retain, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
- (void)copyClicked:(id)arg1;
- (void)showClicked:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

