//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CXElement;
@protocol AXShadowStyle, LineAttributesProxy;

@protocol AxisAttributesProxy <NSObject>
- (id <AXShadowStyle>)tickLabelShadow;
- (CXElement *)tickLabelsAttributes;
- (id <AXShadowStyle>)gridShadow;
- (id <LineAttributesProxy>)gridAttributes;
- (id <AXShadowStyle>)lineShadow;
- (id <LineAttributesProxy>)lineAttributes;
@end

