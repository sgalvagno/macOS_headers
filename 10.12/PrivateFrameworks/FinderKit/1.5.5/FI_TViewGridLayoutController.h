//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TGridLayoutController.h>

__attribute__((visibility("hidden")))
@interface FI_TViewGridLayoutController : FI_TGridLayoutController
{
    struct TNSRef<FI_TViewGridLayoutControllerDelegate *, void> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool layoutInRows; // @dynamic layoutInRows;
- (void)setAnchoredCellFrame:(struct CGRect)arg1;
- (void)setLayoutBounds:(const struct CGRect *)arg1;
- (id)delegate;
- (id)init;

@end

