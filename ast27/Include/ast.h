#ifndef Ta27_AST_H
#define Ta27_AST_H
#ifdef __cplusplus
extern "C" {
#endif

PyAPI_FUNC(mod_ty) PyAST_FromNode(const node *, PyCompilerFlags *flags,
				  const char *, PyArena *);

#ifdef __cplusplus
}
#endif
#endif /* !Ta27_AST_H */
