//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMSharedUtilities/HTMLToSuper_Default_Frame.h>

@interface HTMLToSuper_SPAN_Frame : HTMLToSuper_Default_Frame
{
    BOOL _shouldPopBackgroundColor;
    BOOL _shouldPopForegroundColor;
    BOOL _shouldPopFontFamily;
    BOOL _shouldPopFontSize;
    BOOL _shouldDecrementBoldCount;
    BOOL _shouldDecrementItalicCount;
    BOOL _shouldDecrementUnderlineCount;
    BOOL _shouldDecrementStrikeCount;
}

- (void)parser:(id)arg1 context:(id)arg2 didEndElement:(id)arg3 namespaceURI:(id)arg4 qualifiedName:(id)arg5;
- (void)parser:(id)arg1 context:(id)arg2 didStartElement:(id)arg3 namespaceURI:(id)arg4 qualifiedName:(id)arg5 attributes:(id)arg6;

@end

