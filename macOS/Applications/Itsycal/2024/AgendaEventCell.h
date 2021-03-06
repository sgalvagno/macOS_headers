//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class EventInfo, NSGridView, NSLayoutConstraint, NSTextField;

@interface AgendaEventCell : NSView
{
    NSLayoutConstraint *_gridLeadingConstraint;
    BOOL _dim;
    NSGridView *_grid;
    NSTextField *_titleTextField;
    NSTextField *_locationTextField;
    NSTextField *_durationTextField;
    EventInfo *_eventInfo;
}

@property(nonatomic) BOOL dim; // @synthesize dim=_dim;
@property(nonatomic) __weak EventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(retain, nonatomic) NSTextField *durationTextField; // @synthesize durationTextField=_durationTextField;
@property(retain, nonatomic) NSTextField *locationTextField; // @synthesize locationTextField=_locationTextField;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSGridView *grid; // @synthesize grid=_grid;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) double height;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeChanged:(id)arg1;
- (id)init;

@end

