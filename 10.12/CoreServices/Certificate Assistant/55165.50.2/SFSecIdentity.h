//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFSecIdentity : NSObject
{
    struct OpaqueSecIdentityRef *_ident;
}

- (oneway void)release;
- (id)retain;
- (struct OpaqueSecIdentityRef *)ident;
- (id)initWithIdent:(struct OpaqueSecIdentityRef *)arg1;

@end

