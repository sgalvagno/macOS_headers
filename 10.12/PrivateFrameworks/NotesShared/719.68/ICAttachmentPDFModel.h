//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentPDFModel : ICAttachmentModel
{
}

+ (int)populateSearchStrings:(id)arg1 url:(id)arg2 maxStringLength:(unsigned long long)arg3 isCancelledBlock:(CDUnknownBlockType)arg4;
+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (id)generateSearchIndexStringsOperation;
- (int)populateSearchStrings:(id)arg1;
- (void)generatePreviewsInOperation:(id)arg1;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (BOOL)canMarkup;
- (BOOL)hasPreviews;

@end

