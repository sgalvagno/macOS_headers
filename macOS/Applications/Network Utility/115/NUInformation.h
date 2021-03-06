//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NUTabViewItemDelegate-Protocol.h"

@class NSMutableArray, NSPopUpButton, NSTimer;

@interface NUInformation : NSObject <NUTabViewItemDelegate>
{
    id ethernetAddressTitle;
    id ethernetAddressText;
    id hardwareAddressTitle;
    id hardwareAddressText;
    id linkSpeedTitle;
    id linkSpeedText;
    id linkStatusTitle;
    id linkStatusText;
    id vendorTitle;
    id vendorText;
    id modelTitle;
    id modelText;
    id sentPktsTitle;
    id sentPktsText;
    id sendErrorsTitle;
    id sendErrorsText;
    id recvPktsTitle;
    id recvPktsText;
    id recvErrorsTitle;
    id recvErrorsText;
    id collisionsTitle;
    id collisionsText;
    id line6Title;
    id line6Text;
    NSPopUpButton *interfacePopup;
    unsigned int masterPort;
    unsigned int notifyPort;
    NSTimer *updateTimer;
    NSMutableArray *allInterfaces;
}

@property(retain) NSMutableArray *allInterfaces; // @synthesize allInterfaces;
- (void)changeInterface:(id)arg1;
- (void)tabDeactivated;
- (void)tabActivated;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)displayInformationForInterface;
- (void)displayInformationForSCInterface:(id)arg1;
- (void)displayInformationForIORegInterface:(id)arg1;
- (id)connectTimeString:(id)arg1;
- (id)connectionStatusWithKey:(int)arg1;
- (BOOL)isToolAvailable;
- (id)ipAddressesForInterface:(id)arg1;
- (void)save;
- (void)restore;
- (void)displayGenericStats:(unsigned int)arg1;
- (void)updateTextFieldIfDifferent:(id)arg1 withString:(id)arg2;
- (void)displayControllerProperties:(unsigned int)arg1;
- (void)prettySortInterfaces;
- (void)retrieveSCInterfaces;
- (void)retrieveInterfaces;
- (void)resetTextViews;
- (void)resetStatsViews;
- (void)resetDescriptionViews;
- (void)update:(id)arg1;
- (void)buildPopupMenu;
- (void)watchForInterfaceChanges;

@end

