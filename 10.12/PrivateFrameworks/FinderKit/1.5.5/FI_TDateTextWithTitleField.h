//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TDateTextField.h>

#import <FinderKit/TTextWithTitleFieldImplProtocol-Protocol.h>

@class FI_TTitleField, NSString;

__attribute__((visibility("hidden")))
@interface FI_TDateTextWithTitleField : FI_TDateTextField <TTextWithTitleFieldImplProtocol>
{
    struct TNSRef<FI_TTextWithTitleFieldImpl *, void> _implementation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)calcHeightToFitOfTextFieldOnly:(struct CGSize)arg1;
- (double)calcHeightToFit:(struct CGSize)arg1;
@property FI_TTitleField *titleFld; // @dynamic titleFld;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

