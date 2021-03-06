//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

#import <ActionKit/WFDynamicEnumerationAsynchronousDataSource-Protocol.h>
#import <ActionKit/WFMediaRoutePickerObserver-Protocol.h>

@class NSString, WFMediaRoutePicker;

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationAsynchronousDataSource, WFMediaRoutePickerObserver>
{
    WFMediaRoutePicker *_routePicker;
}

@property(retain, nonatomic) WFMediaRoutePicker *routePicker; // @synthesize routePicker=_routePicker;
- (void).cxx_destruct;
- (void)routePickerDidUpdateAvailableRoutes:(id)arg1;
- (id)accessoryIconForPossibleState:(id)arg1;
- (BOOL)parameterStateIsValid:(id)arg1;
- (id)sortedStatesForAvailableRoutes:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (BOOL)preferItemPickerSheet;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopDiscoveringRoutes;
- (void)startDiscoveringRoutes;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) long long routeType;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

