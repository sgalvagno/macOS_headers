//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSOrthography, NSString;

@protocol NSXPCSpellServer
- (void)_xpc_invalidateDictionary:(NSString *)arg1 newTime:(long long)arg2;
- (void)_xpc_setWords:(NSArray *)arg1 inDictionary:(NSString *)arg2;
- (void)_xpc_wordsInDictionary:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)_xpc_appendWord:(NSString *)arg1 toDictionary:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)_xpc_isWord:(NSString *)arg1 inDictionary:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)_xpc_forgetWord:(NSString *)arg1 inDictionary:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)_xpc_learnWord:(NSString *)arg1 inDictionary:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)_xpc_prefixesForPinyinInputString:(NSString *)arg1 language:(NSString *)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)_xpc_extendedAlternativesForPinyinInputString:(NSString *)arg1 language:(NSString *)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)_xpc_alternativesForPinyinInputString:(NSString *)arg1 language:(NSString *)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)_xpc_stringForInputString:(NSString *)arg1 language:(NSString *)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)_xpc_suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange)arg1 inString:(NSString *)arg2 language:(NSString *)arg3 options:(NSDictionary *)arg4 completionHandler:(void (^)(NSArray *))arg5;
- (void)_xpc_suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange)arg1 inString:(NSString *)arg2 language:(NSString *)arg3 completionHandler:(void (^)(NSArray *))arg4;
- (void)_xpc_suggestCompletionDictionariesForPartialWordRange:(struct _NSRange)arg1 inString:(NSString *)arg2 language:(NSString *)arg3 options:(NSDictionary *)arg4 completionHandler:(void (^)(NSArray *))arg5;
- (void)_xpc_suggestCompletionDictionariesForPartialWordRange:(struct _NSRange)arg1 inString:(NSString *)arg2 language:(NSString *)arg3 completionHandler:(void (^)(NSArray *))arg4;
- (void)_xpc_suggestCompletionsForPartialWordRange:(struct _NSRange)arg1 inString:(NSString *)arg2 language:(NSString *)arg3 options:(NSDictionary *)arg4 completionHandler:(void (^)(NSArray *))arg5;
- (void)_xpc_suggestCompletionsForPartialWordRange:(struct _NSRange)arg1 inString:(NSString *)arg2 language:(NSString *)arg3 completionHandler:(void (^)(NSArray *))arg4;
- (void)_xpc_suggestGuessesForWordRange:(struct _NSRange)arg1 inString:(NSString *)arg2 language:(NSString *)arg3 options:(NSDictionary *)arg4 completionHandler:(void (^)(NSArray *))arg5;
- (void)_xpc_suggestGuessesForWordRange:(struct _NSRange)arg1 inString:(NSString *)arg2 language:(NSString *)arg3 completionHandler:(void (^)(NSArray *))arg4;
- (void)_xpc_suggestGuessesForWord:(NSString *)arg1 inLanguage:(NSString *)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)_xpc_recordResponse:(unsigned long long)arg1 toCorrection:(NSString *)arg2 forWord:(NSString *)arg3 language:(NSString *)arg4;
- (void)_xpc_dataFromGeneratingCandidatesForSelectedRange:(struct _NSRange)arg1 inString:(NSString *)arg2 offset:(unsigned long long)arg3 types:(unsigned long long)arg4 optionsData:(NSData *)arg5 orthography:(NSOrthography *)arg6 learnedDictionaries:(NSArray *)arg7 completionHandler:(void (^)(NSData *))arg8;
- (void)_xpc_dataFromGeneratingCandidatesForSelectedRange:(struct _NSRange)arg1 inString:(NSString *)arg2 offset:(unsigned long long)arg3 types:(unsigned long long)arg4 options:(NSDictionary *)arg5 orthography:(NSOrthography *)arg6 learnedDictionaries:(NSArray *)arg7 completionHandler:(void (^)(NSData *))arg8;
- (void)_xpc_dataFromCheckingString:(NSString *)arg1 offset:(unsigned long long)arg2 types:(unsigned long long)arg3 optionsData:(NSData *)arg4 orthography:(NSOrthography *)arg5 learnedDictionaries:(NSArray *)arg6 completionHandler:(void (^)(NSData *, long long))arg7;
- (void)_xpc_dataFromCheckingString:(NSString *)arg1 offset:(unsigned long long)arg2 types:(unsigned long long)arg3 options:(NSDictionary *)arg4 orthography:(NSOrthography *)arg5 learnedDictionaries:(NSArray *)arg6 completionHandler:(void (^)(NSData *, long long))arg7;
- (void)_xpc_checkString:(NSString *)arg1 offset:(unsigned long long)arg2 types:(unsigned long long)arg3 options:(NSDictionary *)arg4 orthography:(NSOrthography *)arg5 learnedDictionaries:(NSArray *)arg6 completionHandler:(void (^)(NSArray *, long long))arg7;
- (void)_xpc_checkGrammarInString:(NSString *)arg1 language:(NSString *)arg2 completionHandler:(void (^)(struct _NSRange, NSArray *))arg3;
- (void)_xpc_findMisspelledWordInString:(NSString *)arg1 language:(NSString *)arg2 learnedDictionaries:(NSArray *)arg3 countOnly:(BOOL)arg4 completionHandler:(void (^)(struct _NSRange, long long))arg5;
@end

