//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVAction.h>

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction
{
    int _absoluteOrder;
    NSURL *_priorURL;
}

@property(retain, nonatomic) NSURL *priorURL; // @synthesize priorURL=_priorURL;
@property(readonly, nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
- (id)description;
- (void)dealloc;
- (id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3;

@end

