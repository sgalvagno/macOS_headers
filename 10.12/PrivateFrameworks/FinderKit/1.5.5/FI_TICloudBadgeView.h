//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TUpdateLayerView.h>

__attribute__((visibility("hidden")))
@interface FI_TICloudBadgeView : FI_TUpdateLayerView
{
    _Bool _selected;
    _Bool _dimmed;
    _Bool _active;
    _Bool _isMouseDown;
    int _context;
    function_f9feaa7d _clickHandler;
}

@property int context; // @synthesize context=_context;
@property(getter=isActive) _Bool active; // @synthesize active=_active;
@property(getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)setClickHandler:(const function_f9feaa7d *)arg1;
- (id)badgeImage;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)initCommon;

@end

