//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/ColorInvertingTableCellView.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface AddressBookNonNameFieldAutoFillCellView : ColorInvertingTableCellView
{
    NSString *_contactMatchAndContactLabel;
    NSTextField *_contactMatchAndContactLabelTextField;
}

+ (struct CGSize)sizeWithContactMatchAndContactLabel:(id)arg1;
@property __weak NSTextField *contactMatchAndContactLabelTextField; // @synthesize contactMatchAndContactLabelTextField=_contactMatchAndContactLabelTextField;
@property(copy, nonatomic) NSString *contactMatchAndContactLabel; // @synthesize contactMatchAndContactLabel=_contactMatchAndContactLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

