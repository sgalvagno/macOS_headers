//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <QTKit/QTImageConsumerVendor-Protocol.h>

@class QTCALayerRenderer;

__attribute__((visibility("hidden")))
@interface QTCALayerRendererViewBackingLayer : CALayer <QTImageConsumerVendor>
{
    QTCALayerRenderer *_consumer;
}

- (void)layerDidChangeDisplay:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)actionForKey:(id)arg1;
- (id)delegate;
- (void)_display;
- (id)description;
- (void)_appkitViewBackingLayerUniqueMethod;
- (id)imageConsumer;
- (void)dealloc;
- (id)init;

@end

