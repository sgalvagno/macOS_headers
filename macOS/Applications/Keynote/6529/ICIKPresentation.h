//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICIKPresentation : NSObject
{
}

+ (void)endPresentation:(id)arg1 state:(id)arg2;
+ (void)handleSlideSize:(id)arg1 state:(id)arg2;
+ (void)beginPresentation:(id)arg1 state:(id)arg2;
+ (void)p_mapValuesFromClassicShow:(id)arg1 toSoundtrackInShow:(id)arg2 state:(id)arg3;
+ (void)p_reorderMastersInShow:(id)arg1 basedOnMasterOrder:(id)arg2 state:(id)arg3;
+ (void)p_mapHyperlinksFromClassicInDocumentRoot:(id)arg1 andShow:(id)arg2;
+ (void)p_updateSlideHyperlinkMapForStorage:(id)arg1 forDrawable:(id)arg2 withURL:(id)arg3;
+ (void)p_updateSlideHyperlinkMapForDrawable:(id)arg1 withURL:(id)arg2;
+ (void)p_promoteNodesInShow:(id)arg1 deeperThanDepth:(unsigned long long)arg2;

@end

