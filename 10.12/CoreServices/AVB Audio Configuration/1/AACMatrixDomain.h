//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AACAVBDomain, AACMatrixDomainViewController, NSArray, NSTabViewItem;
@protocol OS_dispatch_queue;

@interface AACMatrixDomain : NSObject
{
    AACMatrixDomainViewController *_viewController;
    NSObject<OS_dispatch_queue> *_entityQueue;
    NSTabViewItem *_tabViewItem;
    AACAVBDomain *_domain;
    NSArray *_entities;
}

@property(retain, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(retain, nonatomic) AACAVBDomain *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSTabViewItem *tabViewItem; // @synthesize tabViewItem=_tabViewItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeEntities:(id)arg1;
- (void)removeEntity:(id)arg1;
- (void)addedEntities:(id)arg1;
- (void)addEntity:(id)arg1;
- (void)clearControllerRepresentedObject;
- (id)initWithDomain:(id)arg1;

@end

